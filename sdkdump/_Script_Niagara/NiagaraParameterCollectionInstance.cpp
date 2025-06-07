#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Quat.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_CoreUObject\Vector4.hpp"
#include "NiagaraParameterCollection.hpp"
#include "NiagaraParameterCollectionInstance.hpp"
void _Script_Niagara::NiagaraParameterCollectionInstance::SetVectorParameter(void* InVariableName, _Script_CoreUObject::Vector InValue) {
    return;
}
void _Script_Niagara::NiagaraParameterCollectionInstance::SetColorParameter(void* InVariableName, _Script_CoreUObject::LinearColor InValue) {
    return;
}
_Script_Niagara::NiagaraParameterCollection*& _Script_Niagara::NiagaraParameterCollectionInstance::get_Collection() {
    return *(_Script_Niagara::NiagaraParameterCollection**)((uintptr_t)this + 0x28);
}
void* _Script_Niagara::NiagaraParameterCollectionInstance::get_OverridenParameters() {
    return (void*)((uintptr_t)this + 0x30);
}
void _Script_Niagara::NiagaraParameterCollectionInstance::SetQuatParameter(void* InVariableName, _Script_CoreUObject::Quat& InValue) {
    return;
}
void* _Script_Niagara::NiagaraParameterCollectionInstance::get_ParameterStorage() {
    return (void*)((uintptr_t)this + 0x40);
}
void _Script_Niagara::NiagaraParameterCollectionInstance::SetVector2DParameter(void* InVariableName, _Script_CoreUObject::Vector2D InValue) {
    return;
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraParameterCollectionInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraParameterCollectionInstance");
    return result;
}
void _Script_Niagara::NiagaraParameterCollectionInstance::SetVector4Parameter(void* InVariableName, _Script_CoreUObject::Vector4& InValue) {
    return;
}
void _Script_Niagara::NiagaraParameterCollectionInstance::SetIntParameter(void* InVariableName, int32_t InValue) {
    return;
}
void _Script_Niagara::NiagaraParameterCollectionInstance::SetFloatParameter(void* InVariableName, float InValue) {
    return;
}
void _Script_Niagara::NiagaraParameterCollectionInstance::SetBoolParameter(void* InVariableName, bool InValue) {
    return;
}
_Script_CoreUObject::Vector _Script_Niagara::NiagaraParameterCollectionInstance::GetVectorParameter(void* InVariableName) {
    return;
}
_Script_CoreUObject::Vector4 _Script_Niagara::NiagaraParameterCollectionInstance::GetVector4Parameter(void* InVariableName) {
    return;
}
_Script_CoreUObject::Vector2D _Script_Niagara::NiagaraParameterCollectionInstance::GetVector2DParameter(void* InVariableName) {
    return;
}
_Script_CoreUObject::Quat _Script_Niagara::NiagaraParameterCollectionInstance::GetQuatParameter(void* InVariableName) {
    return;
}
int32_t _Script_Niagara::NiagaraParameterCollectionInstance::GetIntParameter(void* InVariableName) {
    return;
}
float _Script_Niagara::NiagaraParameterCollectionInstance::GetFloatParameter(void* InVariableName) {
    return;
}
_Script_CoreUObject::LinearColor _Script_Niagara::NiagaraParameterCollectionInstance::GetColorParameter(void* InVariableName) {
    return;
}
bool _Script_Niagara::NiagaraParameterCollectionInstance::GetBoolParameter(void* InVariableName) {
    return;
}
