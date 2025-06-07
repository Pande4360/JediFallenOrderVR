#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CollisionResponse.hpp"
void* _Script_Engine::CollisionResponse::get_ResponseToChannels() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::CollisionResponse::get_ResponseArray() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Engine::CollisionResponse::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CollisionResponse");
    return result;
}
