#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// RandomGenerator
struct RandomGenerator_t4127078704;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"

// System.Void RandomGenerator::.ctor()
extern "C"  void RandomGenerator__ctor_m3789481019 (RandomGenerator_t4127078704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RandomGenerator::Start()
extern "C"  void RandomGenerator_Start_m2736618811 (RandomGenerator_t4127078704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RandomGenerator::Update()
extern "C"  void RandomGenerator_Update_m3236656690 (RandomGenerator_t4127078704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject RandomGenerator::MakePlanet(System.Int32)
extern "C"  GameObject_t3674682005 * RandomGenerator_MakePlanet_m3893308171 (RandomGenerator_t4127078704 * __this, int32_t ___layer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RandomGenerator::MakeMoon(UnityEngine.GameObject,System.Int32)
extern "C"  void RandomGenerator_MakeMoon_m2964178279 (RandomGenerator_t4127078704 * __this, GameObject_t3674682005 * ___planet0, int32_t ___layer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RandomGenerator::NewRandomScene()
extern "C"  void RandomGenerator_NewRandomScene_m1859179826 (RandomGenerator_t4127078704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
