#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SubtitleCue.hpp"
void* _Script_Engine::SubtitleCue::get_Text() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::SubtitleCue::get_Time() {
    return *(float*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Engine::SubtitleCue::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SubtitleCue");
    return result;
}
