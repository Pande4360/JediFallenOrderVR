#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Box.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "VisualLoggerKismetLibrary.hpp"
void _Script_Engine::VisualLoggerKismetLibrary::EnableRecording(bool bEnabled) {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::VisualLoggerKismetLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.VisualLoggerKismetLibrary");
    return result;
}
void _Script_Engine::VisualLoggerKismetLibrary::RedirectVislog(_Script_CoreUObject::Object* SourceOwner, _Script_CoreUObject::Object* DestinationOwner) {
    return;
}
void _Script_Engine::VisualLoggerKismetLibrary::LogText(_Script_CoreUObject::Object* WorldContextObject, void* Text, void* LogCategory, bool bAddToMessageLog) {
    return;
}
void _Script_Engine::VisualLoggerKismetLibrary::LogSegment(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector SegmentStart, _Script_CoreUObject::Vector SegmentEnd, void* Text, _Script_CoreUObject::LinearColor ObjectColor, float Thickness, void* CategoryName, bool bAddToMessageLog) {
    return;
}
void _Script_Engine::VisualLoggerKismetLibrary::LogLocation(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Location, void* Text, _Script_CoreUObject::LinearColor ObjectColor, float Radius, void* LogCategory, bool bAddToMessageLog) {
    return;
}
void _Script_Engine::VisualLoggerKismetLibrary::LogBox(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Box BoxShape, void* Text, _Script_CoreUObject::LinearColor ObjectColor, void* LogCategory, bool bAddToMessageLog) {
    return;
}
