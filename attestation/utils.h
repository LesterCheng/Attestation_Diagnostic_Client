﻿//
// Copyright (c) Microsoft Corporation. All rights reserved.
//

#ifndef _ATT_SAMPLES_UTILS_H
#define _ATT_SAMPLES_UTILS_H

#include <string>
#include <wil/resource.h>

// Loads a key from the TPM using the Platform Key Storage Provider.
wil::unique_ncrypt_key load_tpm_key(const std::wstring& name, bool machine_key);

// Creates a 2048-bit RSA key in the TPM using the Platform Key Storage Provider.
wil::unique_ncrypt_key create_tpm_key(const std::wstring& name, bool machine_key);

// Returns the value of an environment variable.
std::string get_env_var(const std::string& env);

// Returns the value of an environment variable or a default string
std::string get_env_var(const std::string& env, const std::string def);

#endif // _ATT_SAMPLES_UTILS_H
