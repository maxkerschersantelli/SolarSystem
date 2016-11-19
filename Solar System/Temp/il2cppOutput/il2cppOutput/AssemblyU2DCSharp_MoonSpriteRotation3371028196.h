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

// MoonSpriteRotation
struct  MoonSpriteRotation_t3371028196  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject MoonSpriteRotation::planet
	GameObject_t3674682005 * ___planet_2;
	// System.Boolean MoonSpriteRotation::update
	bool ___update_3;
	// System.Int32 MoonSpriteRotation::sortingOrder
	int32_t ___sortingOrder_4;

public:
	inline static int32_t get_offset_of_planet_2() { return static_cast<int32_t>(offsetof(MoonSpriteRotation_t3371028196, ___planet_2)); }
	inline GameObject_t3674682005 * get_planet_2() const { return ___planet_2; }
	inline GameObject_t3674682005 ** get_address_of_planet_2() { return &___planet_2; }
	inline void set_planet_2(GameObject_t3674682005 * value)
	{
		___planet_2 = value;
		Il2CppCodeGenWriteBarrier(&___planet_2, value);
	}

	inline static int32_t get_offset_of_update_3() { return static_cast<int32_t>(offsetof(MoonSpriteRotation_t3371028196, ___update_3)); }
	inline bool get_update_3() const { return ___update_3; }
	inline bool* get_address_of_update_3() { return &___update_3; }
	inline void set_update_3(bool value)
	{
		___update_3 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_4() { return static_cast<int32_t>(offsetof(MoonSpriteRotation_t3371028196, ___sortingOrder_4)); }
	inline int32_t get_sortingOrder_4() const { return ___sortingOrder_4; }
	inline int32_t* get_address_of_sortingOrder_4() { return &___sortingOrder_4; }
	inline void set_sortingOrder_4(int32_t value)
	{
		___sortingOrder_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
