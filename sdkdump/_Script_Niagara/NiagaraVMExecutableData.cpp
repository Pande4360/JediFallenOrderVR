#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraVMExecutableData.hpp"
void* _Script_Niagara::NiagaraVMExecutableData::get_InternalParameters() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Niagara::NiagaraVMExecutableData::get_WriteDataSets() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_Niagara::NiagaraVMExecutableData::get_ByteCode() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraVMExecutableData::get_Parameters() {
    return (void*)((uintptr_t)this + 0x18);
}
int32_t& _Script_Niagara::NiagaraVMExecutableData::get_NumUserPtrs() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
void* _Script_Niagara::NiagaraVMExecutableData::get_Attributes() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_Niagara::NiagaraVMExecutableData::get_DataSetToParameters() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Niagara::NiagaraVMExecutableData::get_DataUsage() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_Niagara::NiagaraVMExecutableData::get_DataInterfaceInfo() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_Niagara::NiagaraVMExecutableData::get_CalledVMExternalFunctions() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_Niagara::NiagaraVMExecutableData::get_ReadDataSets() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_Niagara::NiagaraVMExecutableData::get_LastHlslTranslation() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_Niagara::NiagaraVMExecutableData::get_StatScopes() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_Niagara::NiagaraVMExecutableData::get_LastHlslTranslationGPU() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_Niagara::NiagaraVMExecutableData::get_LastAssemblyTranslation() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Script_Niagara::NiagaraVMExecutableData::get_LastOpCount() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_Niagara::NiagaraVMExecutableData::get_DIParamInfo() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_Niagara::NiagaraVMExecutableData::get_ParameterCollectionPaths() {
    return (void*)((uintptr_t)this + 0x138);
}
void* _Script_Niagara::NiagaraVMExecutableData::get_LastCompileStatus() {
    return (void*)((uintptr_t)this + 0x148);
}
bool _Script_Niagara::NiagaraVMExecutableData::get_bReadsAttributeData() {
    return (*(uint8_t*)((uintptr_t)this + 0x149 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraVMExecutableData::set_bReadsAttributeData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x149 + 0);
    *(uint8_t*)((uintptr_t)this + 0x149 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Niagara::NiagaraVMExecutableData::get_ErrorMsg() {
    return (void*)((uintptr_t)this + 0x150);
}
float& _Script_Niagara::NiagaraVMExecutableData::get_CompileTime() {
    return *(float*)((uintptr_t)this + 0x160);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraVMExecutableData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraVMExecutableData");
    return result;
}
