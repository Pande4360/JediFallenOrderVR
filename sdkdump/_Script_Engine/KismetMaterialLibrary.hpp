#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Engine {
struct MaterialParameterCollection;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct KismetMaterialLibrary : public BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void SetVectorParameterValue(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::MaterialParameterCollection* Collection, void* ParameterName, _Script_CoreUObject::LinearColor& ParameterValue);
    void SetScalarParameterValue(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::MaterialParameterCollection* Collection, void* ParameterName, float ParameterValue);
    _Script_CoreUObject::LinearColor GetVectorParameterValue(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::MaterialParameterCollection* Collection, void* ParameterName);
    float GetScalarParameterValue(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::MaterialParameterCollection* Collection, void* ParameterName);
    void EndBatchUpdate(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::MaterialParameterCollection* Collection);
    _Script_Engine::MaterialInstanceDynamic* CreateDynamicMaterialInstance(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::MaterialInterface* Parent, void* OptionalName);
    void BeginBatchUpdate(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::MaterialParameterCollection* Collection);
}; // Size: 0x28
#pragma pack(pop)
}
