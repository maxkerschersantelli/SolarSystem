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

// MoonRotation
struct  MoonRotation_t2185982399  : public MonoBehaviour_t667441552
{
public:
	// System.Single MoonRotation::centerX
	float ___centerX_2;
	// System.Single MoonRotation::centerY
	float ___centerY_3;
	// System.Single MoonRotation::semimajor
	float ___semimajor_4;
	// System.Single MoonRotation::semiminor
	float ___semiminor_5;
	// System.Single MoonRotation::alpha
	float ___alpha_6;
	// System.Single MoonRotation::speed
	float ___speed_7;
	// UnityEngine.GameObject MoonRotation::planet
	GameObject_t3674682005 * ___planet_8;

public:
	inline static int32_t get_offset_of_centerX_2() { return static_cast<int32_t>(offsetof(MoonRotation_t2185982399, ___centerX_2)); }
	inline float get_centerX_2() const { return ___centerX_2; }
	inline float* get_address_of_centerX_2() { return &___centerX_2; }
	inline void set_centerX_2(float value)
	{
		___centerX_2 = value;
	}

	inline static int32_t get_offset_of_centerY_3() { return static_cast<int32_t>(offsetof(MoonRotation_t2185982399, ___centerY_3)); }
	inline float get_centerY_3() const { return ___centerY_3; }
	inline float* get_address_of_centerY_3() { return &___centerY_3; }
	inline void set_centerY_3(float value)
	{
		___centerY_3 = value;
	}

	inline static int32_t get_offset_of_semimajor_4() { return static_cast<int32_t>(offsetof(MoonRotation_t2185982399, ___semimajor_4)); }
	inline float get_semimajor_4() const { return ___semimajor_4; }
	inline float* get_address_of_semimajor_4() { return &___semimajor_4; }
	inline void set_semimajor_4(float value)
	{
		___semimajor_4 = value;
	}

	inline static int32_t get_offset_of_semiminor_5() { return static_cast<int32_t>(offsetof(MoonRotation_t2185982399, ___semiminor_5)); }
	inline float get_semiminor_5() const { return ___semiminor_5; }
	inline float* get_address_of_semiminor_5() { return &___semiminor_5; }
	inline void set_semiminor_5(float value)
	{
		___semiminor_5 = value;
	}

	inline static int32_t get_offset_of_alpha_6() { return static_cast<int32_t>(offsetof(MoonRotation_t2185982399, ___alpha_6)); }
	inline float get_alpha_6() const { return ___alpha_6; }
	inline float* get_address_of_alpha_6() { return &___alpha_6; }
	inline void set_alpha_6(float value)
	{
		___alpha_6 = value;
	}

	inline static int32_t get_offset_of_speed_7() { return static_cast<int32_t>(offsetof(MoonRotation_t2185982399, ___speed_7)); }
	inline float get_speed_7() const { return ___speed_7; }
	inline float* get_address_of_speed_7() { return &___speed_7; }
	inline void set_speed_7(float value)
	{
		___speed_7 = value;
	}

	inline static int32_t get_offset_of_planet_8() { return static_cast<int32_t>(offsetof(MoonRotation_t2185982399, ___planet_8)); }
	inline GameObject_t3674682005 * get_planet_8() const { return ___planet_8; }
	inline GameObject_t3674682005 ** get_address_of_planet_8() { return &___planet_8; }
	inline void set_planet_8(GameObject_t3674682005 * value)
	{
		___planet_8 = value;
		Il2CppCodeGenWriteBarrier(&___planet_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
