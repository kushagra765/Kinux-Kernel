#include "timer.h"
#include "../../kernel/irq.h"
#include "../../include/kinux/ports.h"
#include "../../include/kinux/kernel.h"

int kernel_timer_ticks = 0;

void handler_timer(struct registers *regs) {
     kernel_timer_ticks++;
}

void init_timer() {
     printm("[KERNEL] Initializing Timer");
     install_irq_handler(IRQ0, handler_timer);
}

