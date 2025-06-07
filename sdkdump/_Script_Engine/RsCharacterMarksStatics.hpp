#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct RsCharacterMarksManager;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RsCharacterMarksStatics : public BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    _Script_Engine::RsCharacterMarksManager* GetCharacterMarksManager(_Script_CoreUObject::Object* WorldContextObject);
}; // Size: 0x28
#pragma pack(pop)
}
