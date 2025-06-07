#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ClothPhysicsProperties_Legacy.hpp"
float& _Script_Engine::ClothPhysicsProperties_Legacy::get_HorizontalResistance() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::ClothPhysicsProperties_Legacy::get_VerticalResistance() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::ClothPhysicsProperties_Legacy::get_Damping() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_Engine::ClothPhysicsProperties_Legacy::get_BendResistance() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::ClothPhysicsProperties_Legacy::get_SelfCollisionThickness() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_Engine::ClothPhysicsProperties_Legacy::get_ShearResistance() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::ClothPhysicsProperties_Legacy::get_Friction() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_Engine::ClothPhysicsProperties_Legacy::get_TetherStiffness() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_Engine::ClothPhysicsProperties_Legacy::get_MassScale() {
    return *(float*)((uintptr_t)this + 0x2c);
}
float& _Script_Engine::ClothPhysicsProperties_Legacy::get_TetherLimit() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_Engine::ClothPhysicsProperties_Legacy::get_Drag() {
    return *(float*)((uintptr_t)this + 0x20);
}
float& _Script_Engine::ClothPhysicsProperties_Legacy::get_StiffnessFrequency() {
    return *(float*)((uintptr_t)this + 0x24);
}
float& _Script_Engine::ClothPhysicsProperties_Legacy::get_GravityScale() {
    return *(float*)((uintptr_t)this + 0x28);
}
float& _Script_Engine::ClothPhysicsProperties_Legacy::get_InertiaBlend() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_Engine::ClothPhysicsProperties_Legacy::get_SelfCollisionSquashScale() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_Engine::ClothPhysicsProperties_Legacy::get_SelfCollisionStiffness() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Script_Engine::ClothPhysicsProperties_Legacy::get_SolverFrequency() {
    return *(float*)((uintptr_t)this + 0x40);
}
float& _Script_Engine::ClothPhysicsProperties_Legacy::get_FiberCompression() {
    return *(float*)((uintptr_t)this + 0x44);
}
float& _Script_Engine::ClothPhysicsProperties_Legacy::get_FiberExpansion() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_Engine::ClothPhysicsProperties_Legacy::get_FiberResistance() {
    return *(float*)((uintptr_t)this + 0x4c);
}
_Script_CoreUObject::Class* _Script_Engine::ClothPhysicsProperties_Legacy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ClothPhysicsProperties_Legacy");
    return result;
}
