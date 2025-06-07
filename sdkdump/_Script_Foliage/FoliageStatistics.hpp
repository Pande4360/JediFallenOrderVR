#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Box.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_Foliage {
#pragma pack(push, 1)
struct FoliageStatistics : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    int32_t FoliageOverlappingSphereCount(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::StaticMesh* StaticMesh, _Script_CoreUObject::Vector CenterPosition, float Radius);
    int32_t FoliageOverlappingBoxCount(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::StaticMesh* StaticMesh, _Script_CoreUObject::Box Box);
}; // Size: 0x28
#pragma pack(pop)
}
