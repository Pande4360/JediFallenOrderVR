#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DropNoteInfo.hpp"
void* _Script_Engine::DropNoteInfo::get_Location() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::DropNoteInfo::get_Rotation() {
    return (void*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_Engine::DropNoteInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.DropNoteInfo");
    return result;
}
void* _Script_Engine::DropNoteInfo::get_Comment() {
    return (void*)((uintptr_t)this + 0x18);
}
