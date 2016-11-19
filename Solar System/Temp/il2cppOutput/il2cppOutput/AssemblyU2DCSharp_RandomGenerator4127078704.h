#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RandomGenerator
struct  RandomGenerator_t4127078704  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 RandomGenerator::maxPlanets
	int32_t ___maxPlanets_2;
	// System.Int32 RandomGenerator::minPlanets
	int32_t ___minPlanets_3;
	// System.Int32 RandomGenerator::maxMoons
	int32_t ___maxMoons_4;
	// System.Int32 RandomGenerator::minMoons
	int32_t ___minMoons_5;
	// System.Single RandomGenerator::planetRotationSpeed
	float ___planetRotationSpeed_6;

public:
	inline static int32_t get_offset_of_maxPlanets_2() { return static_cast<int32_t>(offsetof(RandomGenerator_t4127078704, ___maxPlanets_2)); }
	inline int32_t get_maxPlanets_2() const { return ___maxPlanets_2; }
	inline int32_t* get_address_of_maxPlanets_2() { return &___maxPlanets_2; }
	inline void set_maxPlanets_2(int32_t value)
	{
		___maxPlanets_2 = value;
	}

	inline static int32_t get_offset_of_minPlanets_3() { return static_cast<int32_t>(offsetof(RandomGenerator_t4127078704, ___minPlanets_3)); }
	inline int32_t get_minPlanets_3() const { return ___minPlanets_3; }
	inline int32_t* get_address_of_minPlanets_3() { return &___minPlanets_3; }
	inline void set_minPlanets_3(int32_t value)
	{
		___minPlanets_3 = value;
	}

	inline static int32_t get_offset_of_maxMoons_4() { return static_cast<int32_t>(offsetof(RandomGenerator_t4127078704, ___maxMoons_4)); }
	inline int32_t get_maxMoons_4() const { return ___maxMoons_4; }
	inline int32_t* get_address_of_maxMoons_4() { return &___maxMoons_4; }
	inline void set_maxMoons_4(int32_t value)
	{
		___maxMoons_4 = value;
	}

	inline static int32_t get_offset_of_minMoons_5() { return static_cast<int32_t>(offsetof(RandomGenerator_t4127078704, ___minMoons_5)); }
	inline int32_t get_minMoons_5() const { return ___minMoons_5; }
	inline int32_t* get_address_of_minMoons_5() { return &___minMoons_5; }
	inline void set_minMoons_5(int32_t value)
	{
		___minMoons_5 = value;
	}

	inline static int32_t get_offset_of_planetRotationSpeed_6() { return static_cast<int32_t>(offsetof(RandomGenerator_t4127078704, ___planetRotationSpeed_6)); }
	inline float get_planetRotationSpeed_6() const { return ___planetRotationSpeed_6; }
	inline float* get_address_of_planetRotationSpeed_6() { return &___planetRotationSpeed_6; }
	inline void set_planetRotationSpeed_6(float value)
	{
		___planetRotationSpeed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
