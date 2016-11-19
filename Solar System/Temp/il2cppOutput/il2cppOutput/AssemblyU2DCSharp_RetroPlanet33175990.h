#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_PixelAssetRP2264092648.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RetroPlanet
struct  RetroPlanet_t33175990  : public PixelAssetRP_t2264092648
{
public:
	// System.Int32 RetroPlanet::radius
	int32_t ___radius_6;
	// UnityEngine.Color RetroPlanet::highlightColor
	Color_t4194546905  ___highlightColor_7;
	// UnityEngine.Color RetroPlanet::shadeColor
	Color_t4194546905  ___shadeColor_8;
	// System.Single RetroPlanet::shadeWidth
	float ___shadeWidth_9;

public:
	inline static int32_t get_offset_of_radius_6() { return static_cast<int32_t>(offsetof(RetroPlanet_t33175990, ___radius_6)); }
	inline int32_t get_radius_6() const { return ___radius_6; }
	inline int32_t* get_address_of_radius_6() { return &___radius_6; }
	inline void set_radius_6(int32_t value)
	{
		___radius_6 = value;
	}

	inline static int32_t get_offset_of_highlightColor_7() { return static_cast<int32_t>(offsetof(RetroPlanet_t33175990, ___highlightColor_7)); }
	inline Color_t4194546905  get_highlightColor_7() const { return ___highlightColor_7; }
	inline Color_t4194546905 * get_address_of_highlightColor_7() { return &___highlightColor_7; }
	inline void set_highlightColor_7(Color_t4194546905  value)
	{
		___highlightColor_7 = value;
	}

	inline static int32_t get_offset_of_shadeColor_8() { return static_cast<int32_t>(offsetof(RetroPlanet_t33175990, ___shadeColor_8)); }
	inline Color_t4194546905  get_shadeColor_8() const { return ___shadeColor_8; }
	inline Color_t4194546905 * get_address_of_shadeColor_8() { return &___shadeColor_8; }
	inline void set_shadeColor_8(Color_t4194546905  value)
	{
		___shadeColor_8 = value;
	}

	inline static int32_t get_offset_of_shadeWidth_9() { return static_cast<int32_t>(offsetof(RetroPlanet_t33175990, ___shadeWidth_9)); }
	inline float get_shadeWidth_9() const { return ___shadeWidth_9; }
	inline float* get_address_of_shadeWidth_9() { return &___shadeWidth_9; }
	inline void set_shadeWidth_9(float value)
	{
		___shadeWidth_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
