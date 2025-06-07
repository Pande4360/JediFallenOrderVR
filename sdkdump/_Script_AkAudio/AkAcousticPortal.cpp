#include "..\FUObjectArray.hpp"
#include "AkAcousticPortal.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Volume.hpp"
void* _Script_AkAudio::AkAcousticPortal::get_InitialState() {
    return (void*)((uintptr_t)this + 0x398);
}
float& _Script_AkAudio::AkAcousticPortal::get_ObstructionRefreshInterval() {
    return *(float*)((uintptr_t)this + 0x39c);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkAcousticPortal::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.AkAcousticPortal");
    return result;
}
void* _Script_AkAudio::AkAcousticPortal::get_ObstructionCollisionChannel() {
    return (void*)((uintptr_t)this + 0x3a0);
}
void _Script_AkAudio::AkAcousticPortal::OpenPortal() {
    return;
}
void* _Script_AkAudio::AkAcousticPortal::GetCurrentState() {
    return;
}
void _Script_AkAudio::AkAcousticPortal::ClosePortal() {
    return;
}
