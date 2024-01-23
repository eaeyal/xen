#ifndef __ASM_SMP_H
#define __ASM_SMP_H

#include <xen/cpumask.h>
#include <xen/percpu.h>

DECLARE_PER_CPU(cpumask_var_t, cpu_sibling_mask);
DECLARE_PER_CPU(cpumask_var_t, cpu_core_mask);

/*
 * Do we, for platform reasons, need to actually keep CPUs online when we
 * would otherwise prefer them to be off?
 */
#define park_offline_cpus false

#endif
