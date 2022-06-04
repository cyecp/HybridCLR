﻿#include "Instruction.h"

namespace huatuo
{
namespace interpreter
{
    uint16_t g_instructionSizes[] =
    {
        //!!!{{INST_SIZE
		4,
		6,
		6,
		6,
		6,
		6,
		6,
		8,
		6,
		6,
		6,
		8,
		12,
		4,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		8,
		8,
		2,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		6,
		6,
		6,
		6,
		6,
		6,
		4,
		4,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		6,
		8,
		8,
		8,
		8,
		10,
		10,
		10,
		10,
		10,
		10,
		10,
		10,
		10,
		10,
		10,
		10,
		10,
		10,
		10,
		10,
		10,
		10,
		10,
		10,
		10,
		10,
		10,
		10,
		10,
		10,
		10,
		10,
		10,
		10,
		10,
		10,
		10,
		10,
		10,
		10,
		10,
		10,
		10,
		10,
		6,
		12,
		24,
		12,
		12,
		24,
		18,
		14,
		18,
		4,
		14,
		14,
		4,
		4,
		4,
		4,
		4,
		4,
		4,
		4,
		4,
		4,
		8,
		2,
		14,
		16,
		18,
		12,
		14,
		14,
		16,
		18,
		12,
		14,
		14,
		16,
		18,
		16,
		18,
		20,
		16,
		14,
		14,
		14,
		8,
		8,
		12,
		14,
		6,
		14,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		8,
		8,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		8,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		6,
		8,
		4,
		4,
		4,
		4,
		4,
		4,
		4,
		4,
		4,
		4,
		6,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		10,
		12,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		10,
		12,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		10,
		12,
		14,
		14,
		14,
		14,
		14,
		14,
		14,
		14,
		14,
		14,
		14,
		14,
		14,
		14,
		14,
		16,
		18,
		14,
		14,
		14,
		14,
		14,
		14,
		14,
		14,
		14,
		14,
		14,
		14,
		14,
		14,
		14,
		16,
		18,
		14,
		16,
		16,
		16,
		16,
		16,
		16,
		16,
		16,
		16,
		16,
		16,
		16,
		16,
		16,
		16,
		16,
		18,
		20,
		14,
		14,
		14,
		14,
		14,
		14,
		14,
		14,
		14,
		14,
		14,
		14,
		14,
		14,
		14,
		16,
		18,
		14,
		14,
		6,
		6,
		8,
		8,
		16,
		16,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		14,
		16,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		8,
		4,
		2,
		6,
		4,
		2,
		14,
		14,
		14,
		14,
		16,
		14,
		10,
		10,
		10,
		8,
		8,
		8,
		4,
		8,
		8,
		10,
		8,
		10,
		12,

        //!!!}}INST_SIZE
    };
}
}