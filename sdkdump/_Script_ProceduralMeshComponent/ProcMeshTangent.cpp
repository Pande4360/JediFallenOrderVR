#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ProcMeshTangent.hpp"
void* _Script_ProceduralMeshComponent::ProcMeshTangent::get_TangentX() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_ProceduralMeshComponent::ProcMeshTangent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ProceduralMeshComponent.ProcMeshTangent");
    return result;
}
bool _Script_ProceduralMeshComponent::ProcMeshTangent::get_bFlipTangentY() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 1 != 0;
}
void _Script_ProceduralMeshComponent::ProcMeshTangent::set_bFlipTangentY(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
