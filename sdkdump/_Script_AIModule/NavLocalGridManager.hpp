#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct NavLocalGridManager : public _Script_CoreUObject::Object {
    private: char pad_28[0x30]; public:
    static _Script_CoreUObject::Class* static_class();
    bool SetLocalNavigationGridDensity(_Script_CoreUObject::Object* WorldContextObject, float CellSize);
    void RemoveLocalNavigationGrid(_Script_CoreUObject::Object* WorldContextObject, int32_t GridId, bool bRebuildGrids);
    bool FindLocalNavigationGridPath(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& Start, _Script_CoreUObject::Vector& End, void*& PathPoints);
    int32_t AddLocalNavigationGridForPoints(_Script_CoreUObject::Object* WorldContextObject, void*& Locations, int32_t Radius2D, float Height, bool bRebuildGrids);
    int32_t AddLocalNavigationGridForPoint(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& Location, int32_t Radius2D, float Height, bool bRebuildGrids);
    int32_t AddLocalNavigationGridForCapsule(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& Location, float CapsuleRadius, float CapsuleHalfHeight, int32_t Radius2D, float Height, bool bRebuildGrids);
    int32_t AddLocalNavigationGridForBox(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& Location, _Script_CoreUObject::Vector Extent, _Script_CoreUObject::Rotator Rotation, int32_t Radius2D, float Height, bool bRebuildGrids);
}; // Size: 0x58
#pragma pack(pop)
}
