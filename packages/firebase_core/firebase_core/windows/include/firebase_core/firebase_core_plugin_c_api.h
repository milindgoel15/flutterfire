/*
 * Copyright 2023, the Chromium project authors.  Please see the AUTHORS file
 * for details. All rights reserved. Use of this source code is governed by a
 * BSD-style license that can be found in the LICENSE file.
 */

#ifndef FLUTTER_PLUGIN_FIREBASE_CORE_PLUGIN_C_API_H_
#define FLUTTER_PLUGIN_FIREBASE_CORE_PLUGIN_C_API_H_

#include <flutter_plugin_registrar.h>

#include <string>

#ifdef FLUTTER_PLUGIN_IMPL
#define FLUTTER_PLUGIN_EXPORT __declspec(dllexport)
#else
#define FLUTTER_PLUGIN_EXPORT __declspec(dllimport)
#endif

#if defined(__cplusplus)
extern "C" {
#endif

FLUTTER_PLUGIN_EXPORT void FirebaseCorePluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar);

<<<<<<< HEAD
=======
FLUTTER_PLUGIN_EXPORT void* GetFirebaseApp(std::string appName);

FLUTTER_PLUGIN_EXPORT void* GetFirebaseAuth(std::string appName);

FLUTTER_PLUGIN_EXPORT void* GetFirebaseRemoteConfig(std::string appName);

#if defined(__cplusplus)
}  // extern "C"
#endif

>>>>>>> parent of 0cedfc858 (feat(auth, windows): add Windows support to auth plugin (#11089))
#endif  // FLUTTER_PLUGIN_FIREBASE_CORE_PLUGIN_C_API_H_
