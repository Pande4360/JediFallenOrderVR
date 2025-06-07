#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CollisionResponseContainer.hpp"
void* _Script_Engine::CollisionResponseContainer::get_WorldStatic() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::CollisionResponseContainer::get_Visibility() {
    return (void*)((uintptr_t)this + 0x3);
}
void* _Script_Engine::CollisionResponseContainer::get_WorldDynamic() {
    return (void*)((uintptr_t)this + 0x1);
}
void* _Script_Engine::CollisionResponseContainer::get_Pawn() {
    return (void*)((uintptr_t)this + 0x2);
}
void* _Script_Engine::CollisionResponseContainer::get_Camera() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_Engine::CollisionResponseContainer::get_PhysicsBody() {
    return (void*)((uintptr_t)this + 0x5);
}
void* _Script_Engine::CollisionResponseContainer::get_Vehicle() {
    return (void*)((uintptr_t)this + 0x6);
}
void* _Script_Engine::CollisionResponseContainer::get_Destructible() {
    return (void*)((uintptr_t)this + 0x7);
}
void* _Script_Engine::CollisionResponseContainer::get_ActorCollisionQuery() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::CollisionResponseContainer::get_ActorTopologyQuery() {
    return (void*)((uintptr_t)this + 0x9);
}
void* _Script_Engine::CollisionResponseContainer::get_AudioObstructionQuery() {
    return (void*)((uintptr_t)this + 0xa);
}
void* _Script_Engine::CollisionResponseContainer::get_EngineTraceChannel1() {
    return (void*)((uintptr_t)this + 0xb);
}
void* _Script_Engine::CollisionResponseContainer::get_EngineTraceChannel2() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_Engine::CollisionResponseContainer::get_EngineTraceChannel3() {
    return (void*)((uintptr_t)this + 0xd);
}
void* _Script_Engine::CollisionResponseContainer::get_EngineTraceChannel4() {
    return (void*)((uintptr_t)this + 0xe);
}
void* _Script_Engine::CollisionResponseContainer::get_EngineTraceChannel5() {
    return (void*)((uintptr_t)this + 0xf);
}
void* _Script_Engine::CollisionResponseContainer::get_EngineTraceChannel6() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::CollisionResponseContainer::get_GameTraceChannel1() {
    return (void*)((uintptr_t)this + 0x11);
}
void* _Script_Engine::CollisionResponseContainer::get_GameTraceChannel2() {
    return (void*)((uintptr_t)this + 0x12);
}
void* _Script_Engine::CollisionResponseContainer::get_GameTraceChannel3() {
    return (void*)((uintptr_t)this + 0x13);
}
void* _Script_Engine::CollisionResponseContainer::get_GameTraceChannel4() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_Engine::CollisionResponseContainer::get_GameTraceChannel5() {
    return (void*)((uintptr_t)this + 0x15);
}
void* _Script_Engine::CollisionResponseContainer::get_GameTraceChannel6() {
    return (void*)((uintptr_t)this + 0x16);
}
void* _Script_Engine::CollisionResponseContainer::get_GameTraceChannel7() {
    return (void*)((uintptr_t)this + 0x17);
}
void* _Script_Engine::CollisionResponseContainer::get_GameTraceChannel8() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::CollisionResponseContainer::get_GameTraceChannel9() {
    return (void*)((uintptr_t)this + 0x19);
}
void* _Script_Engine::CollisionResponseContainer::get_GameTraceChannel10() {
    return (void*)((uintptr_t)this + 0x1a);
}
void* _Script_Engine::CollisionResponseContainer::get_GameTraceChannel11() {
    return (void*)((uintptr_t)this + 0x1b);
}
void* _Script_Engine::CollisionResponseContainer::get_GameTraceChannel12() {
    return (void*)((uintptr_t)this + 0x1c);
}
void* _Script_Engine::CollisionResponseContainer::get_GameTraceChannel13() {
    return (void*)((uintptr_t)this + 0x1d);
}
void* _Script_Engine::CollisionResponseContainer::get_GameTraceChannel14() {
    return (void*)((uintptr_t)this + 0x1e);
}
void* _Script_Engine::CollisionResponseContainer::get_GameTraceChannel15() {
    return (void*)((uintptr_t)this + 0x1f);
}
_Script_CoreUObject::Class* _Script_Engine::CollisionResponseContainer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CollisionResponseContainer");
    return result;
}
