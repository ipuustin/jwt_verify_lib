// Copyright 2018 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include "jwt_verify_lib/jwks.h"
#include "jwt_verify_lib/jwt.h"
#include "jwt_verify_lib/status.h"

namespace google {
namespace jwt_verify {

/**
 * This function verifies JWT signature.
 * If verification failed, returns the failture reason.
 * @param jwt is Jwt object
 * @param jwks is Jwks object
 * @return the verification status
 */
Status verifyJwt(const Jwt& jwt, const Jwks& jwks);

}  // namespace jwt_verify
}  // namespace google
