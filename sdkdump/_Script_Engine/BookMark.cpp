#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BookMark.hpp"
#include "BookmarkBase.hpp"
void* _Script_Engine::BookMark::get_Location() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::BookMark::get_Rotation() {
    return (void*)((uintptr_t)this + 0x34);
}
void* _Script_Engine::BookMark::get_HiddenLevels() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::BookMark::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.BookMark");
    return result;
}
