#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RawAnimSequenceTrack.hpp"
void* _Script_Engine::RawAnimSequenceTrack::get_PosKeys() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::RawAnimSequenceTrack::get_RotKeys() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::RawAnimSequenceTrack::get_ScaleKeys() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Engine::RawAnimSequenceTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RawAnimSequenceTrack");
    return result;
}
