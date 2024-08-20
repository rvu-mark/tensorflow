/* Copyright 2024 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#ifndef TENSORFLOW_COMPILER_MLIR_LITE_CORE_C_C_API_TYPES_H_
#define TENSORFLOW_COMPILER_MLIR_LITE_CORE_C_C_API_TYPES_H_

#include <cstdint>

/// Types supported by tensor
typedef enum {
  kTfLiteNoType = 0,
  kTfLiteFloat32 = 1,
  kTfLiteInt32 = 2,
  kTfLiteUInt8 = 3,
  kTfLiteInt64 = 4,
  kTfLiteString = 5,
  kTfLiteBool = 6,
  kTfLiteInt16 = 7,
  kTfLiteComplex64 = 8,
  kTfLiteInt8 = 9,
  kTfLiteFloat16 = 10,
  kTfLiteFloat64 = 11,
  kTfLiteComplex128 = 12,
  kTfLiteUInt64 = 13,
  kTfLiteResource = 14,
  kTfLiteVariant = 15,
  kTfLiteUInt32 = 16,
  kTfLiteUInt16 = 17,
  kTfLiteInt4 = 18,
  kTfLiteBFloat16 = 19,
} TFLMigrationType;

/// Legacy. Will be deprecated in favor of `TfLiteAffineQuantization`.
/// If per-layer quantization is specified this field will still be populated in
/// addition to `TfLiteAffineQuantization`.
/// Parameters for asymmetric quantization. Quantized values can be converted
/// back to float using: `real_value = scale * (quantized_value - zero_point)`
typedef struct TFLMigrationQuantizationParams {
  float scale;
  int32_t zero_point;
} TFLMigrationQuantizationParams;

#endif  // TENSORFLOW_COMPILER_MLIR_LITE_CORE_C_C_API_TYPES_H_
