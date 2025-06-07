#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "SwFlameThrowerCollider.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwFlameThrowerCollider::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwFlameThrowerCollider");
    return result;
}
void* _Script_SwGame::SwFlameThrowerCollider::get_DominantAxis() {
    return (void*)((uintptr_t)this + 0xb90);
}
void* _Script_SwGame::SwFlameThrowerCollider::get_CollisionTypes() {
    return (void*)((uintptr_t)this + 0xb98);
}
