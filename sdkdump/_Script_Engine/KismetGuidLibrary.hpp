#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Guid.hpp"
#include "BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct KismetGuidLibrary : public BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void Parse_StringToGuid(void* GuidString, _Script_CoreUObject::Guid& OutGuid, bool& Success);
    bool NotEqual_GuidGuid(_Script_CoreUObject::Guid& A, _Script_CoreUObject::Guid& B);
    _Script_CoreUObject::Guid NewGuid();
    bool IsValid_Guid(_Script_CoreUObject::Guid& InGuid);
    void Invalidate_Guid(_Script_CoreUObject::Guid& InGuid);
    bool EqualEqual_GuidGuid(_Script_CoreUObject::Guid& A, _Script_CoreUObject::Guid& B);
    void* Conv_GuidToString(_Script_CoreUObject::Guid& InGuid);
}; // Size: 0x28
#pragma pack(pop)
}
