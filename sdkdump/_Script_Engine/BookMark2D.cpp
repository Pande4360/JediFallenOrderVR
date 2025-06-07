#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BookMark2D.hpp"
#include "BookmarkBase.hpp"
float& _Script_Engine::BookMark2D::get_Zoom2D() {
    return *(float*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::BookMark2D::get_Location() {
    return (void*)((uintptr_t)this + 0x2c);
}
_Script_CoreUObject::Class* _Script_Engine::BookMark2D::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.BookMark2D");
    return result;
}
