#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Box.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct VisualLoggerKismetLibrary : public BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void RedirectVislog(_Script_CoreUObject::Object* SourceOwner, _Script_CoreUObject::Object* DestinationOwner);
    void LogText(_Script_CoreUObject::Object* WorldContextObject, void* Text, void* LogCategory, bool bAddToMessageLog);
    void LogSegment(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector SegmentStart, _Script_CoreUObject::Vector SegmentEnd, void* Text, _Script_CoreUObject::LinearColor ObjectColor, float Thickness, void* CategoryName, bool bAddToMessageLog);
    void LogLocation(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Location, void* Text, _Script_CoreUObject::LinearColor ObjectColor, float Radius, void* LogCategory, bool bAddToMessageLog);
    void LogBox(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Box BoxShape, void* Text, _Script_CoreUObject::LinearColor ObjectColor, void* LogCategory, bool bAddToMessageLog);
    void EnableRecording(bool bEnabled);
}; // Size: 0x28
#pragma pack(pop)
}
