#include "..\FUObjectArray.hpp"
#include "FractureMaterial.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ApexDestruction::FractureMaterial::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ApexDestruction.FractureMaterial");
    return result;
}
float& _Script_ApexDestruction::FractureMaterial::get_UAngle() {
    return *(float*)((uintptr_t)this + 0x1c);
}
void* _Script_ApexDestruction::FractureMaterial::get_UVScale() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ApexDestruction::FractureMaterial::get_UVOffset() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ApexDestruction::FractureMaterial::get_Tangent() {
    return (void*)((uintptr_t)this + 0x10);
}
int32_t& _Script_ApexDestruction::FractureMaterial::get_InteriorElementIndex() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
