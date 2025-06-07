#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TableRowBase.hpp"
namespace _Script_RsGameTechRT {
struct RsAICharacterDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwMeditationTrainingWaveEnemyEntry : public _Script_Engine::TableRowBase {
    private: char pad_8[0x18]; public:
    _Script_RsGameTechRT::RsAICharacterDefinition*& get_EnemyType();
    void* get_SpawnMin();
    void* get_SpawnMax();
    void* get_TokenCost();
    void* get_Probability();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
