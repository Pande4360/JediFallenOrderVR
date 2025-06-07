#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "KismetMaterialLibrary.hpp"
#include "MaterialInstanceDynamic.hpp"
#include "MaterialInterface.hpp"
#include "MaterialParameterCollection.hpp"
_Script_CoreUObject::Class* _Script_Engine::KismetMaterialLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.KismetMaterialLibrary");
    return result;
}
void _Script_Engine::KismetMaterialLibrary::SetVectorParameterValue(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::MaterialParameterCollection* Collection, void* ParameterName, _Script_CoreUObject::LinearColor& ParameterValue) {
    return;
}
void _Script_Engine::KismetMaterialLibrary::BeginBatchUpdate(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::MaterialParameterCollection* Collection) {
    return;
}
_Script_Engine::MaterialInstanceDynamic* _Script_Engine::KismetMaterialLibrary::CreateDynamicMaterialInstance(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::MaterialInterface* Parent, void* OptionalName) {
    return;
}
void _Script_Engine::KismetMaterialLibrary::SetScalarParameterValue(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::MaterialParameterCollection* Collection, void* ParameterName, float ParameterValue) {
    return;
}
_Script_CoreUObject::LinearColor _Script_Engine::KismetMaterialLibrary::GetVectorParameterValue(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::MaterialParameterCollection* Collection, void* ParameterName) {
    return;
}
float _Script_Engine::KismetMaterialLibrary::GetScalarParameterValue(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::MaterialParameterCollection* Collection, void* ParameterName) {
    return;
}
void _Script_Engine::KismetMaterialLibrary::EndBatchUpdate(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::MaterialParameterCollection* Collection) {
    return;
}
