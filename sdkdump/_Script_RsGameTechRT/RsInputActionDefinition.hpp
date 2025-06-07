#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsInputActionDefinition : public _Script_Engine::DataAsset {
    private: char pad_30[0x68]; public:
    void* get_ActionName();
    void* get_BufferMask();
    void* get_ModifiersToClearOnBufferEnd();
    bool get_bBufferWhenHeld();
    void set_bBufferWhenHeld(bool value);
    float& get_OnHeldTime();
    bool get_bCheckEvenIfAlreadyConsumed();
    void set_bCheckEvenIfAlreadyConsumed(bool value);
    bool get_bResetBufferedActionOnSuccess();
    void set_bResetBufferedActionOnSuccess(bool value);
    void* get_OnPressed();
    void* get_OnHeld();
    void* get_OnReleased();
    static _Script_CoreUObject::Class* static_class();
    void PopulateActionNameList(_Script_CoreUObject::Object* ContextObject, void*& Options);
    void FunctionSignature();
    bool BoolReturnFunctionSignature(void* InActionName);
    void BoolRefParamFunctionSignature(void* InActionName, bool& Result);
}; // Size: 0x98
#pragma pack(pop)
}
