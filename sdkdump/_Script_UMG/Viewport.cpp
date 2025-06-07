#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\World.hpp"
#include "ContentWidget.hpp"
#include "Viewport.hpp"
void* _Script_UMG::Viewport::get_BackgroundColor() {
    return (void*)((uintptr_t)this + 0x118);
}
_Script_CoreUObject::Rotator _Script_UMG::Viewport::GetViewRotation() {
    return;
}
_Script_CoreUObject::Class* _Script_UMG::Viewport::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.Viewport");
    return result;
}
_Script_Engine::Actor* _Script_UMG::Viewport::Spawn(void* ActorClass) {
    return;
}
_Script_CoreUObject::Vector _Script_UMG::Viewport::GetViewLocation() {
    return;
}
void _Script_UMG::Viewport::SetViewRotation(_Script_CoreUObject::Rotator Rotation) {
    return;
}
void _Script_UMG::Viewport::SetViewLocation(_Script_CoreUObject::Vector Location) {
    return;
}
_Script_Engine::World* _Script_UMG::Viewport::GetViewportWorld() {
    return;
}
