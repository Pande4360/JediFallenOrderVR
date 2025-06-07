#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "IntSerialization.hpp"
void* _Script_Engine::IntSerialization::get_UnsignedInt32Variable() {
    return (void*)((uintptr_t)this + 0x2c);
}
void* _Script_Engine::IntSerialization::get_UnsignedInt16Variable() {
    return (void*)((uintptr_t)this + 0x28);
}
int32_t& _Script_Engine::IntSerialization::get_SignedInt32Variable() {
    return *(int32_t*)((uintptr_t)this + 0x4c);
}
void* _Script_Engine::IntSerialization::get_SignedInt64Variable() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::IntSerialization::get_UnsignedInt64Variable() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::IntSerialization::get_SignedInt8Variable() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::IntSerialization::get_UnsignedInt8Variable() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::IntSerialization::get_SignedInt16Variable() {
    return (void*)((uintptr_t)this + 0x3a);
}
_Script_CoreUObject::Class* _Script_Engine::IntSerialization::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.IntSerialization");
    return result;
}
