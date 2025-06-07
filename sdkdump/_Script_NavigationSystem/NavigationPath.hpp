#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_NavigationSystem {
#pragma pack(push, 1)
struct NavigationPath : public _Script_CoreUObject::Object {
    private: char pad_28[0x60]; public:
    void* get_PathUpdatedNotifier();
    void* get_PathPoints();
    void* get_RecalculateOnInvalidation();
    static _Script_CoreUObject::Class* static_class();
    bool IsValid();
    bool IsStringPulled();
    bool IsPartial();
    float GetPathLength();
    float GetPathCost();
    void* GetDebugString();
    void EnableRecalculationOnInvalidation(void* DoRecalculation);
    void EnableDebugDrawing(bool bShouldDrawDebugData, _Script_CoreUObject::LinearColor PathColor);
}; // Size: 0x88
#pragma pack(pop)
}
