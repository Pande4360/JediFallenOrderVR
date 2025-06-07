#include "..\FUObjectArray.hpp"
#include "SRTSubtitle.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_BinkMediaPlayer::SRTSubtitle::get_StartTime() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_BinkMediaPlayer::SRTSubtitle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/BinkMediaPlayer.SRTSubtitle");
    return result;
}
void* _Script_BinkMediaPlayer::SRTSubtitle::get_EndTime() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_BinkMediaPlayer::SRTSubtitle::get_Text() {
    return (void*)((uintptr_t)this + 0x10);
}
