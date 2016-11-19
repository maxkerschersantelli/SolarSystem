#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoonSprite
struct  MoonSprite_t492110150  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject MoonSprite::planet
	GameObject_t3674682005 * ___planet_2;
	// System.Int32 MoonSprite::layer
	int32_t ___layer_3;
	// System.Boolean MoonSprite::update
	bool ___update_4;

public:
	inline static int32_t get_offset_of_planet_2() { return static_cast<int32_t>(offsetof(MoonSprite_t492110150, ___planet_2)); }
	inline GameObject_t3674682005 * get_planet_2() const { return ___planet_2; }
	inline GameObject_t3674682005 ** get_address_of_planet_2() { return &___planet_2; }
	inline void set_planet_2(GameObject_t3674682005 * value)
	{
		___planet_2 = value;
		Il2CppCodeGenWriteBarrier(&___planet_2, value);
	}

	inline static int32_t get_offset_of_layer_3() { return static_cast<int32_t>(offsetof(MoonSprite_t492110150, ___layer_3)); }
	inline int32_t get_layer_3() const { return ___layer_3; }
	inline int32_t* get_address_of_layer_3() { return &___layer_3; }
	inline void set_layer_3(int32_t value)
	{
		___layer_3 = value;
	}

	inline static int32_t get_offset_of_update_4() { return static_cast<int32_t>(offsetof(MoonSprite_t492110150, ___update_4)); }
	inline bool get_update_4() const { return ___update_4; }
	inline bool* get_address_of_update_4() { return &___update_4; }
	inline void set_update_4(bool value)
	{
		___update_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
