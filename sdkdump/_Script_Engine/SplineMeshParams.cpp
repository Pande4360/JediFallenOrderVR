#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SplineMeshParams.hpp"
float& _Script_Engine::SplineMeshParams::get_StartRoll() {
    return *(float*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::SplineMeshParams::get_StartPos() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::SplineMeshParams::get_EndPos() {
    return (void*)((uintptr_t)this + 0x2c);
}
void* _Script_Engine::SplineMeshParams::get_StartTangent() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_Engine::SplineMeshParams::get_EndTangent() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::SplineMeshParams::get_StartScale() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::SplineMeshParams::get_StartOffset() {
    return (void*)((uintptr_t)this + 0x24);
}
void* _Script_Engine::SplineMeshParams::get_EndScale() {
    return (void*)((uintptr_t)this + 0x44);
}
float& _Script_Engine::SplineMeshParams::get_EndRoll() {
    return *(float*)((uintptr_t)this + 0x4c);
}
void* _Script_Engine::SplineMeshParams::get_EndOffset() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_Engine::SplineMeshParams::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SplineMeshParams");
    return result;
}
