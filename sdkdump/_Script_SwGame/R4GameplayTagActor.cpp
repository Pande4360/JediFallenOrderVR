#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "R4GameplayTagActor.hpp"
_Script_CoreUObject::Class* _Script_SwGame::R4GameplayTagActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4GameplayTagActor");
    return result;
}
void* _Script_SwGame::R4GameplayTagActor::get_GameplayTags() {
    return (void*)((uintptr_t)this + 0x368);
}
