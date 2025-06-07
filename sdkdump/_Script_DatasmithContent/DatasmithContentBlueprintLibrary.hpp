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
namespace _Script_DatasmithContent {
struct DatasmithAssetUserData;
}
namespace _Script_DatasmithContent {
#pragma pack(push, 1)
struct DatasmithContentBlueprintLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void* GetDatasmithUserDataValueForKey(_Script_CoreUObject::Object* Object, void* Key);
    void GetDatasmithUserDataKeysAndValuesForValue(_Script_CoreUObject::Object* Object, void* StringToMatch, void*& OutKeys, void*& OutValues);
    _Script_DatasmithContent::DatasmithAssetUserData* GetDatasmithUserData(_Script_CoreUObject::Object* Object);
}; // Size: 0x28
#pragma pack(pop)
}
