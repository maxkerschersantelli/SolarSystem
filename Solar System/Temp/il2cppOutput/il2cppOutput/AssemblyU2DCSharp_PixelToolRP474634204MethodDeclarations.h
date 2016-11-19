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

// PixelToolRP
struct PixelToolRP_t474634204;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Texture2D3884108195.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"

// System.Void PixelToolRP::.ctor()
extern "C"  void PixelToolRP__ctor_m1320172303 (PixelToolRP_t474634204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelToolRP::DrawLine(UnityEngine.Texture2D,UnityEngine.Color,UnityEngine.Vector2,System.Int32,System.Single)
extern "C"  void PixelToolRP_DrawLine_m3973517433 (Il2CppObject * __this /* static, unused */, Texture2D_t3884108195 * ___texture0, Color_t4194546905  ___col1, Vector2_t4282066565  ___pos2, int32_t ___length3, float ___angle4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelToolRP::DrawLine(UnityEngine.Texture2D,UnityEngine.Color,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  void PixelToolRP_DrawLine_m2986421015 (Il2CppObject * __this /* static, unused */, Texture2D_t3884108195 * ___texture0, Color_t4194546905  ___col1, Vector2_t4282066565  ___start2, Vector2_t4282066565  ___end3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelToolRP::DrawVerticalLine(UnityEngine.Texture2D,UnityEngine.Color,UnityEngine.Vector2,System.Int32)
extern "C"  void PixelToolRP_DrawVerticalLine_m43785642 (Il2CppObject * __this /* static, unused */, Texture2D_t3884108195 * ___texture0, Color_t4194546905  ___col1, Vector2_t4282066565  ___start2, int32_t ___height3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelToolRP::DrawThickVerticalLine(UnityEngine.Texture2D,UnityEngine.Color,UnityEngine.Vector2,System.Int32,System.Int32)
extern "C"  void PixelToolRP_DrawThickVerticalLine_m1073361152 (Il2CppObject * __this /* static, unused */, Texture2D_t3884108195 * ___texture0, Color_t4194546905  ___col1, Vector2_t4282066565  ___start2, int32_t ___height3, int32_t ___width4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelToolRP::DrawBresenhamLine(UnityEngine.Texture2D,UnityEngine.Color,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  void PixelToolRP_DrawBresenhamLine_m3618877562 (Il2CppObject * __this /* static, unused */, Texture2D_t3884108195 * ___texture0, Color_t4194546905  ___col1, Vector2_t4282066565  ___start2, Vector2_t4282066565  ___end3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 PixelToolRP::GetPointOnLine(UnityEngine.Vector2,System.Single,System.Int32)
extern "C"  Vector2_t4282066565  PixelToolRP_GetPointOnLine_m3099692383 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___v10, float ___angle1, int32_t ___distance2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelToolRP::DrawCircle(UnityEngine.Texture2D,UnityEngine.Color,UnityEngine.Vector2,System.Int32)
extern "C"  void PixelToolRP_DrawCircle_m3889878128 (Il2CppObject * __this /* static, unused */, Texture2D_t3884108195 * ___texture0, Color_t4194546905  ___col1, Vector2_t4282066565  ___c2, int32_t ___radius3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelToolRP::DrawFilledCircle(UnityEngine.Texture2D,UnityEngine.Color,UnityEngine.Vector2,System.Int32)
extern "C"  void PixelToolRP_DrawFilledCircle_m3611199474 (Il2CppObject * __this /* static, unused */, Texture2D_t3884108195 * ___texture0, Color_t4194546905  ___col1, Vector2_t4282066565  ___c2, int32_t ___radius3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelToolRP::DrawEllipse(UnityEngine.Texture2D,UnityEngine.Color,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void PixelToolRP_DrawEllipse_m4171899701 (Il2CppObject * __this /* static, unused */, Texture2D_t3884108195 * ___texture0, Color_t4194546905  ___col1, int32_t ___x02, int32_t ___y03, int32_t ___x14, int32_t ___y15, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelToolRP::DrawFilledEllipse(UnityEngine.Texture2D,UnityEngine.Color,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void PixelToolRP_DrawFilledEllipse_m2984444343 (Il2CppObject * __this /* static, unused */, Texture2D_t3884108195 * ___texture0, Color_t4194546905  ___col1, int32_t ___x02, int32_t ___y03, int32_t ___x14, int32_t ___y15, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelToolRP::DrawRing(UnityEngine.Texture2D,UnityEngine.Color,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void PixelToolRP_DrawRing_m3962316211 (Il2CppObject * __this /* static, unused */, Texture2D_t3884108195 * ___texture0, Color_t4194546905  ___col1, int32_t ___x02, int32_t ___y03, int32_t ___x14, int32_t ___y15, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelToolRP::DrawOutline(UnityEngine.Texture2D,UnityEngine.Color)
extern "C"  void PixelToolRP_DrawOutline_m188933393 (Il2CppObject * __this /* static, unused */, Texture2D_t3884108195 * ___texture0, Color_t4194546905  ___outlineColor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelToolRP::SparseErode(UnityEngine.Texture2D,System.Int32,System.Boolean,UnityEngine.Vector4)
extern "C"  void PixelToolRP_SparseErode_m283113220 (Il2CppObject * __this /* static, unused */, Texture2D_t3884108195 * ___texture0, int32_t ___probability1, bool ___applyBox2, Vector4_t4282066567  ___area3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color PixelToolRP::Shade(UnityEngine.Color,System.Single)
extern "C"  Color_t4194546905  PixelToolRP_Shade_m2054612106 (Il2CppObject * __this /* static, unused */, Color_t4194546905  ___col0, float ___percent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color PixelToolRP::Tint(UnityEngine.Color,System.Single)
extern "C"  Color_t4194546905  PixelToolRP_Tint_m2200469634 (Il2CppObject * __this /* static, unused */, Color_t4194546905  ___col0, float ___percent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color PixelToolRP::GrayIt(UnityEngine.Color)
extern "C"  Color_t4194546905  PixelToolRP_GrayIt_m3673003210 (Il2CppObject * __this /* static, unused */, Color_t4194546905  ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color PixelToolRP::ColorReplace(UnityEngine.Color,UnityEngine.Color)
extern "C"  Color_t4194546905  PixelToolRP_ColorReplace_m422759783 (Il2CppObject * __this /* static, unused */, Color_t4194546905  ___col0, Color_t4194546905  ___replaceColor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color PixelToolRP::NightEffect(UnityEngine.Color)
extern "C"  Color_t4194546905  PixelToolRP_NightEffect_m1419665801 (Il2CppObject * __this /* static, unused */, Color_t4194546905  ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color PixelToolRP::NightEffect(UnityEngine.Color,System.Single)
extern "C"  Color_t4194546905  PixelToolRP_NightEffect_m524748974 (Il2CppObject * __this /* static, unused */, Color_t4194546905  ___col0, float ___amount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color PixelToolRP::Blend(UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C"  Color_t4194546905  PixelToolRP_Blend_m3651274502 (Il2CppObject * __this /* static, unused */, Color_t4194546905  ___one0, Color_t4194546905  ___two1, float ___transition2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color PixelToolRP::RandomColor()
extern "C"  Color_t4194546905  PixelToolRP_RandomColor_m3631006996 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D PixelToolRP::ApplyNightEffect(UnityEngine.Texture2D,System.Single)
extern "C"  Texture2D_t3884108195 * PixelToolRP_ApplyNightEffect_m2233486062 (Il2CppObject * __this /* static, unused */, Texture2D_t3884108195 * ___texture0, float ___amount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D PixelToolRP::ApplyColorVariation(UnityEngine.Texture2D,System.Single)
extern "C"  Texture2D_t3884108195 * PixelToolRP_ApplyColorVariation_m4006185561 (Il2CppObject * __this /* static, unused */, Texture2D_t3884108195 * ___texture0, float ___variation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D PixelToolRP::SetupTexture(System.Int32,System.Int32)
extern "C"  Texture2D_t3884108195 * PixelToolRP_SetupTexture_m3259755664 (Il2CppObject * __this /* static, unused */, int32_t ___width0, int32_t ___height1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D PixelToolRP::ClampTexture(UnityEngine.Texture2D)
extern "C"  Texture2D_t3884108195 * PixelToolRP_ClampTexture_m787918404 (Il2CppObject * __this /* static, unused */, Texture2D_t3884108195 * ___tex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
