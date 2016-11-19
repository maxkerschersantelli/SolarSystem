#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3884108195;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PixelAssetRP
struct  PixelAssetRP_t2264092648  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean PixelAssetRP::GenerateAtRuntime
	bool ___GenerateAtRuntime_2;
	// UnityEngine.Texture2D PixelAssetRP::texture
	Texture2D_t3884108195 * ___texture_3;
	// System.Int32 PixelAssetRP::texDimensions
	int32_t ___texDimensions_4;
	// System.Int32 PixelAssetRP::offset
	int32_t ___offset_5;

public:
	inline static int32_t get_offset_of_GenerateAtRuntime_2() { return static_cast<int32_t>(offsetof(PixelAssetRP_t2264092648, ___GenerateAtRuntime_2)); }
	inline bool get_GenerateAtRuntime_2() const { return ___GenerateAtRuntime_2; }
	inline bool* get_address_of_GenerateAtRuntime_2() { return &___GenerateAtRuntime_2; }
	inline void set_GenerateAtRuntime_2(bool value)
	{
		___GenerateAtRuntime_2 = value;
	}

	inline static int32_t get_offset_of_texture_3() { return static_cast<int32_t>(offsetof(PixelAssetRP_t2264092648, ___texture_3)); }
	inline Texture2D_t3884108195 * get_texture_3() const { return ___texture_3; }
	inline Texture2D_t3884108195 ** get_address_of_texture_3() { return &___texture_3; }
	inline void set_texture_3(Texture2D_t3884108195 * value)
	{
		___texture_3 = value;
		Il2CppCodeGenWriteBarrier(&___texture_3, value);
	}

	inline static int32_t get_offset_of_texDimensions_4() { return static_cast<int32_t>(offsetof(PixelAssetRP_t2264092648, ___texDimensions_4)); }
	inline int32_t get_texDimensions_4() const { return ___texDimensions_4; }
	inline int32_t* get_address_of_texDimensions_4() { return &___texDimensions_4; }
	inline void set_texDimensions_4(int32_t value)
	{
		___texDimensions_4 = value;
	}

	inline static int32_t get_offset_of_offset_5() { return static_cast<int32_t>(offsetof(PixelAssetRP_t2264092648, ___offset_5)); }
	inline int32_t get_offset_5() const { return ___offset_5; }
	inline int32_t* get_address_of_offset_5() { return &___offset_5; }
	inline void set_offset_5(int32_t value)
	{
		___offset_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
