#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Foliage {
struct FoliageType;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsFoliageAudioStatics : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    _Script_Foliage::FoliageType* FindPrimaryFoliageTypeAtLocation(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Location, float Radius);
}; // Size: 0x28
#pragma pack(pop)
}
