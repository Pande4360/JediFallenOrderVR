#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SlateMeshVertex.hpp"
void* _Script_UMG::SlateMeshVertex::get_UV5() {
    return (void*)((uintptr_t)this + 0x34);
}
void* _Script_UMG::SlateMeshVertex::get_Position() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_UMG::SlateMeshVertex::get_Color() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_UMG::SlateMeshVertex::get_UV0() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_UMG::SlateMeshVertex::get_UV1() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_UMG::SlateMeshVertex::get_UV3() {
    return (void*)((uintptr_t)this + 0x24);
}
void* _Script_UMG::SlateMeshVertex::get_UV2() {
    return (void*)((uintptr_t)this + 0x1c);
}
void* _Script_UMG::SlateMeshVertex::get_UV4() {
    return (void*)((uintptr_t)this + 0x2c);
}
_Script_CoreUObject::Class* _Script_UMG::SlateMeshVertex::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/UMG.SlateMeshVertex");
    return result;
}
