//===-- Implementation of llabs -------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "src/stdlib/llabs.h"
#include "src/__support/common.h"
#include "src/stdlib/abs_utils.h"

namespace __llvm_libc {

long long LLVM_LIBC_ENTRYPOINT(llabs)(long long n) {
  // integer_abs from abs_utils.h.
  return integer_abs(n);
}

} // namespace __llvm_libc
