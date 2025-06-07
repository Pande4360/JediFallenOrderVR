#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwProjectileTypeName.hpp"
void* _Script_SwGame::SwProjectileTypeName::get_Type() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SwGame::SwProjectileTypeName::get_Name() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SwGame::SwProjectileTypeName::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwProjectileTypeName");
    return result;
}
