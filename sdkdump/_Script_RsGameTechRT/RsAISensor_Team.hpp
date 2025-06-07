#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsAISensor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsAIController;
}
namespace _Script_RsGameTechRT {
struct RsAISystem;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAISensor_Team : public RsAISensor {
    static _Script_CoreUObject::Class* static_class();
    void OnAwarenessStateChanged(_Script_RsGameTechRT::RsAIController* AIController, void* PreviousAwarenessState, void* NewAwarenessState);
    void OnAIUninitialized(_Script_RsGameTechRT::RsAISystem* AISystem, _Script_RsGameTechRT::RsAIController* AIController);
    void OnAIInitialized(_Script_RsGameTechRT::RsAISystem* AISystem, _Script_RsGameTechRT::RsAIController* AIController);
}; // Size: 0x68
#pragma pack(pop)
}
