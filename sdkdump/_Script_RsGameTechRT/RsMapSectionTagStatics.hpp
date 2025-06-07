#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_RsGameTechRT {
struct RsMapSectionTag;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsMapSectionTagStatics : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void* ToString(_Script_RsGameTechRT::RsMapSectionTag& MapSectionTag);
    void* ToLocationStampEnumName(_Script_CoreUObject::Object* WorldContextObject, _Script_RsGameTechRT::RsMapSectionTag& MapSectionTag);
    void* MakeLocationStampEnumName(_Script_CoreUObject::Object* WorldContextObject, void*& WorldName, void*& RegionName);
    bool IsValid(_Script_RsGameTechRT::RsMapSectionTag& MapSectionTag);
    bool IsNotEqual(_Script_RsGameTechRT::RsMapSectionTag& A, _Script_RsGameTechRT::RsMapSectionTag& B);
    bool IsEqual(_Script_RsGameTechRT::RsMapSectionTag& A, _Script_RsGameTechRT::RsMapSectionTag& B);
}; // Size: 0x28
#pragma pack(pop)
}
