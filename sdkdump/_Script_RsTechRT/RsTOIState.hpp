#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsTOIState : public _Script_CoreUObject::Object {
    private: char pad_28[0x218]; public:
    static _Script_CoreUObject::Class* static_class();
    _Script_CoreUObject::Vector GetWorldSeparationAxis(float T);
    float GetTolerance();
    bool GetTOISuccess();
    int32_t GetTOIIterations();
    float GetTOI();
    float GetTimeRootCurrent();
    float GetTimeRoot2();
    float GetTimeRoot1();
    float GetTime2();
    float GetTime1();
    float GetTargetSeparation();
    void* GetState();
    _Script_CoreUObject::Vector GetSeparationVertex(float T);
    float GetSeparationTimeRoot();
    float GetSeparationTime2();
    float GetSeparationTime1();
    int32_t GetRootSolverIterations();
    _Script_CoreUObject::Vector GetLocalSeparationAxis();
    int32_t GetDeepestPointsIterations();
    _Script_CoreUObject::Vector GetDeepestPointsAxis2(float T);
    _Script_CoreUObject::Vector GetDeepestPointsAxis1(float T);
    _Script_CoreUObject::Vector GetDeepestPoint2(float T);
    _Script_CoreUObject::Vector GetDeepestPoint1(float T);
}; // Size: 0x240
#pragma pack(pop)
}
